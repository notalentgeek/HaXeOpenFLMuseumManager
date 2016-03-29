class MuseumEditPopupUI_Object extends MuseumAddAndEditUIPopup_Object{





    /*==================================================*/
    private var explanation_TextInput_Struct_Array      (null, null)        :Array<TextInput_Struct>        = new Array<TextInput_Struct>();
    private var explanationLastIndex_Int                (null, null)        :Int                            = null;
    private var full_Text                               (null, null)        :Text                           = null;
    private var museum_Button_Array                     (null, null)        :Array<Button>                  = new Array<Button>();
    private var museum_ListSelector                     (null, null)        :ListSelector                   = null;
    private var nameAlt_TextInput                       (null, null)        :TextInput                      = null;
    private var nameFull_TextInput                      (null, null)        :TextInput                      = null;
    private var parentNameFull_ListSelector             (null, null)        :ListSelector                   = null;
    private var selected_Museum_Object                  (null, null)        :Museum_Object                  = null;
    private var selectedPrev_Museum_Object              (null, null)        :Museum_Object                  = null;
    private var tag_ListSelector_Struct_Array           (null, null)        :Array<ListSelector_Struct>     = new Array<ListSelector_Struct>();
    private var type_ListSelector                       (null, null)        :ListSelector                   = null;
    private var museumType_String                       (null, null)        :String                         = null;
    private var museumTypePrev_String                   (null, null)        :String                         = null;
    private var visitorCurrent_Text                     (null, null)        :Text                           = null;
    private var visitorTotal_Text                       (null, null)        :Text                           = null;
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
            "MuseumEditUIPopup_Button",
            Init_Void,
            "layout/MuseumEditUIPopup_Object.xml",
            "Edit Museum Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();





        _Grid                           = _Popup.content.findChild("MuseumEditUIPopup_Object__Grid"                         , Grid              , true);
        full_Text                       = _Popup.content.findChild("MuseumEditUIPopup_Object_full_Text"                     , Text              , true);
        museum_ListSelector             = _Popup.content.findChild("MuseumEditUIPopup_Object_museum_ListSelector"           , ListSelector      , true);
        nameAlt_TextInput               = _Popup.content.findChild("MuseumEditUIPopup_Object_nameAlt_TextInput"             , TextInput         , true);
        nameFull_TextInput              = _Popup.content.findChild("MuseumEditUIPopup_Object_nameFull_TextInput"            , TextInput         , true);
        parentNameFull_ListSelector     = _Popup.content.findChild("MuseumEditUIPopup_Object_parentNameFull_ListSelector"   , ListSelector      , true);
        type_ListSelector               = _Popup.content.findChild("MuseumEditUIPopup_Object_type_ListSelector"             , ListSelector      , true);
        visitorCurrent_Text             = _Popup.content.findChild("MuseumEditUIPopup_Object_visitorCurrent_Text"           , Text              , true);
        visitorTotal_Text               = _Popup.content.findChild("MuseumEditUIPopup_Object_visitorTotal_Text"             , Text              , true);

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){ super.Button_Void(Edit_Void); }
    /*==================================================*/





    /*==================================================
    This is a function so that I can call a museum button with different kind of characteristic.
    For example when I click the Exhibition XXX button this popup will appears with the value from
         the Exhibition XXX.*/
    private function CallbackEachMuseum_Void():Void{

        /*Adding callback for the museum specific button.
        Here inject a String into _Event.componen.userData from the button object.
        It is like a build in field that can be put with any type data.*/
        if(_Event.component.userData != null){

            var full_String                 :String             = null;
            var museumTypeFull_String       :String             = null;
            var userData_String             :String             = "" + _Event.component.userData;
            var userData_String_Array       :Array<String>      = userData_String.split("*");
            var nameAlt_String              :String             = userData_String_Array[1];
            var nameAlt_String_Array        :Array<String>      = nameAlt_String.split("_");
            var museumType_String           :String             = nameAlt_String_Array[0];
            var _MuseumType_Enum            :MuseumType_Enum    = Type.createEnum(MuseumType_Enum, museumType_String);
            var _Museum_Object              :Museum_Object      = StaticFunction_Collection.Find_Museum_Object(_Global_Object, _MuseumType_Enum, nameAlt_String);





            if(_Museum_Object != null){

                /*Set the selected museum object.
                This function only happen when the user selec the object directly from the main user interface.*/
                selected_Museum_Object = _Museum_Object;
                /*Set the full String.
                In these if statement I need to translate boolean value into String value.*/
                if(selected_Museum_Object._MuseumAndVisitorAgnostic_Object.full_Bool        == true)    { full_String = "True"; }
                else if(selected_Museum_Object._MuseumAndVisitorAgnostic_Object.full_Bool   == false)   { full_String = "False"; }
                /*Convert museum type into String.
                The museum type is an enumeration.
                However, since the user interface element cannot comprehend enumeration I need to convert
                    the enumerations into String.*/
                if(museumType_String        == "EXH"){ museumTypeFull_String = "Exhibition";}
                else if(museumType_String   == "FLR"){ museumTypeFull_String = "Floor";}
                else if(museumType_String   == "ROM"){ museumTypeFull_String = "Room";}





                /*Initiate basic setup for elements in the popup object based on the selected museum object.*/
                full_Text.text                      = full_String;
                museum_ListSelector.disabled        = false;
                museum_ListSelector.selectedIndex   = 0;
                nameAlt_TextInput.disabled          = false;
                nameAlt_TextInput.text              = selected_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String;
                nameFull_TextInput.disabled         = false;
                nameFull_TextInput.text             = selected_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String;
                type_ListSelector.disabled          = false;
                type_ListSelector.text              = museumTypeFull_String;
                visitorCurrent_Text.text            = "" + selected_Museum_Object._MuseumAndVisitorAgnostic_Object._VisitorCount_Struct.current_Int;
                visitorTotal_Text.text              = "" + selected_Museum_Object._MuseumAndVisitorAgnostic_Object._VisitorCount_Struct.total_Int;
                /*Set the main array based on the selected museum object.
                For example if the selected object is an exhibition object, the main array will be
                    exhibition_Museum_Object_Array for the whole operations.
                This is for adding all museum object based on the selected museum type into
                    list selector.*/
                var main_Museum_Object_Array:Array<Museum_Object> = new Array<Museum_Object>();
                if(museumType_String        == "Exhibition")    { main_Museum_Object_Array = _Global_Object.exhibition_Museum_Object_Array; }
                else if(museumType_String   == "Floor")         { main_Museum_Object_Array = _Global_Object.floor_Museum_Object_Array; }
                else if(museumType_String   == "Room")          { main_Museum_Object_Array = _Global_Object.room_Museum_Object_Array; }
                var loopCounter1_Int:Int = 0;
                while(loopCounter1_Int < main_Museum_Object_Array.length){

                    museum_ListSelector
                        .dataSource
                        .createFromString(
                            main_Museum_Object_Array[loopCounter1_Int]
                                ._MuseumAndVisitorAgnostic_Object
                                ._Name_Struct
                                .full_String
                        );





                    loopCounter1_Int ++;

                }
                /*If the selected museum object is not a floor object.*/
                if(
                    selected_Museum_Object._MuseumType_Enum         != FLR  &&
                    selected_Museum_Object.parent_Museum_Object     != null
                ){

                    parentNameFull_ListSelector.disabled    = false;
                    parentNameFull_ListSelector.text        =
                        selected_Museum_Object.parent_Museum_Object
                            ._MuseumAndVisitorAgnostic_Object
                            ._Name_Struct
                            .full_String;

                }
                /*After other popup elements are initiated before I setup these elements..*/
                museum_ListSelector.text            = nameFull_TextInput.text;
                /*Setting up previous String to detect change.
                Because I need to reset the list selector if there is change in the museum type.*/
                museumTypePrev_String               = type_ListSelector.text;

            }

        }

    }
    /*==================================================*/





    /*==================================================*/
    private function Edit_Void(){

        selected_Museum_Object._MuseumAndVisitorAgnostic_Object._explanation_String_Array = explanation_String_Array;
        selected_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String = nameAlt_String;
        selected_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String = nameFull_String;
        selected_Museum_Object._Tag_Object_Array = _Tag_Object_Array);
        selected_Museum_Object.parent_Museum_Object = parent_Museum_Object;

    }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){

        super.Init_Void();




        CollectionFunction.Clear_T_Array(explanation_TextInput_Struct_Array);
        CollectionFunction.Clear_T_Array(tag_ListSelector_Struct_Array);





        museumType_String               = "";
        museumTypePrev_String           = "";





        explanation_Text.text                   = "Explanation";
        explanation_TextInput.disabled          = true;
        explanation_TextInput.percentWidth      = 100;
        museum_ListSelector.disabled            = true;
        museum_ListSelector.method              = "default";
        nameAlt_TextInput.disabled              = true;
        nameFull_TextInput.disabled             = true;
        parentNameFull_ListSelector.disabled    = true;
        parentNameFull_ListSelector.method      = "default";
        type_ListSelector.method                = "default";





        /*Adding the first explanation box.*/
        var explanation_Text        :Text               = new Text();
        var explanation_TextInput   :TextInput          = new TextInput();
        var _TextInput_Struct       :TextInput_Struct   = {

            _Text                   :explanation_Text,
            _TextInput              :explanation_TextInput

        };
        _Grid.addChild(explanation_Text);
        _Grid.addChild(explanation_TextInput);
        explanation_TextInput_Struct_Array.push(_TextInput_Struct);
        explanation_Text.id         ="MuseumEditUIPopup_Object_explanation_Text_"          + explanation_TextInput_Struct_Array.length;
        explanation_TextInput.id    ="MuseumEditUIPopup_Object_explanation_TextInput_"     + explanation_TextInput_Struct_Array.length;
        explanationLastIndex_Int    = _Grid.indexOfChild(explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].explanation_TextInput) + 1;





        /*Adding the first tag selection box.*/
        var tag_Text:Text = new Text();
        var tag_ListSelector:ListSelector = new ListSelector();
        var _ListSelector_Struct   :ListSelector_Struct = {
            _ListSelector   :tag_ListSelector,
            _Text           :tag_Text
        };
        _Grid.addChild(tag_Text);
        _Grid.addChild(tag_ListSelector);
        tag_ListSelector_Struct_Array.push(_ListSelector_Struct);
        tag_ListSelector.disabled           = true;
        tag_ListSelector.id                 = "MuseumEditUIPopup_Object_tag_ListSelector_" + tag_ListSelector_Struct_Array.length;
        tag_ListSelector.method             = "default";
        tag_ListSelector.percentWidth       = 100;
        tag_ListSelector.selectedIndex      = -1;
        tag_ListSelector.text               = "";
        tag_Text.id                         = "MuseumEditUIPopup_Object_tag_Text_" + tag_ListSelector_Struct_Array.length;
        tag_Text.text                       = "Tags";






        CallbackEachMuseum_Void();

    }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void():Void(){

        super.Update_Void();

    }
    /*==================================================*/





    public function UpdateVoid(){

        var updateMuseumButtonBool:Bool = false;
        if(
            museum_Button_Array.length != (
                _Global_Object.GetExhibitionObjectArray()   .length +
                _Global_Object.GetFloorObjectArray()        .length +
                _Global_Object.GetRoomObjectArray()         .length
            )
        ){ updateMuseumButtonBool = true; }
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _Global_Object.GetExhibitionObjectArray().length){

            if(updateMuseumButtonBool == true){ break; }
            if(museum_Button_Array[loopCounter1Int] != _Global_Object.GetExhibitionObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject()){
                updateMuseumButtonBool = true;
                break;
            }
            loopCounter1Int ++;

        }
        loopCounter1Int = 0;
        while(loopCounter1Int < _Global_Object.GetFloorObjectArray().length){

            if(updateMuseumButtonBool == true){ break; }
            if(museum_Button_Array[loopCounter1Int + _Global_Object.GetExhibitionObjectArray().length] != _Global_Object.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject()){
                updateMuseumButtonBool = true;
                break;
            }
            loopCounter1Int ++;

        }
        loopCounter1Int = 0;
        while(loopCounter1Int < _Global_Object.GetRoomObjectArray().length){

            if(updateMuseumButtonBool == true){ break; }
            if(museum_Button_Array[loopCounter1Int + _Global_Object.GetExhibitionObjectArray().length + _Global_Object.GetFloorObjectArray().length] != _Global_Object.GetRoomObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject()){
                updateMuseumButtonBool = true;
                break;
            }
            loopCounter1Int ++;

        }
        if(updateMuseumButtonBool == true){
            CollectionFunction.ClearArray(museum_Button_Array);
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < _Global_Object.GetExhibitionObjectArray().length){
                _Global_Object.GetExhibitionObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().userData
                    = _Global_Object.GetExhibitionObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().id;
                museum_Button_Array.push(_Global_Object.GetExhibitionObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject());
                _Global_Object.GetExhibitionObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().onClick = _Button.onClick;
                loopCounter1Int ++;
            }
            loopCounter1Int = 0;
            while(loopCounter1Int < _Global_Object.GetFloorObjectArray().length){
                _Global_Object.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().userData
                    = _Global_Object.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().id;
                museum_Button_Array.push(_Global_Object.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject());
                _Global_Object.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().onClick = _Button.onClick;
                loopCounter1Int ++;
            }
            loopCounter1Int = 0;
            while(loopCounter1Int < _Global_Object.GetRoomObjectArray().length){
                _Global_Object.GetRoomObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().userData
                    = _Global_Object.GetRoomObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().id;
                museum_Button_Array.push(_Global_Object.GetRoomObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject());
                _Global_Object.GetRoomObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().onClick = _Button.onClick;
                loopCounter1Int ++;
            }
        }

        if(_Popup != null){

            if(
                type_ListSelector.text                   == ""   ||
                type_ListSelector.text                   == " "
            ){
                museum_ListSelector.disabled       = true;
                museum_ListSelector.selectedIndex  = -1;
                museum_ListSelector.text           = " ";
            }
            else{ museum_ListSelector.disabled = false; }
            if(
                museum_ListSelector.text           == ""   ||
                museum_ListSelector.text           == " "
            ){
                nameAlt_TextInput.disabled                     = true;
                nameFull_TextInput.disabled                    = true;
                parentNameFull_ListSelector.disabled     = true;
            }
            else{
                nameAlt_TextInput.disabled                     = false;
                nameFull_TextInput.disabled                    = false;
                parentNameFull_ListSelector.disabled     = false;
            }

            if(type_ListSelector.selectedIndex != -1){

                museumType_String = type_ListSelector.text;
                if(museumType_String != museumTypePrev_String){

                    nameAlt_TextInput.disabled = false;
                    nameAlt_TextInput.text = " ";
                    nameFull_TextInput.disabled = false;
                    nameFull_TextInput.text = " ";
                    museum_ListSelector.dataSource.removeAll();
                    museum_ListSelector.disabled = false;
                    museum_ListSelector.selectedIndex = -1;
                    parentNameFull_ListSelector.disabled = false;
                    parentNameFull_ListSelector.selectedIndex = -1;

                    var tempObjectArray:Array<Museum_Object> = new Array<Museum_Object>();
                    if(museumType_String == "Exhibition"){ tempObjectArray = _Global_Object.GetExhibitionObjectArray(); }
                    else if(museumType_String == "Floor"){ tempObjectArray = _Global_Object.GetFloorObjectArray(); }
                    else if(museumType_String == "Room"){ tempObjectArray = _Global_Object.GetRoomObjectArray(); }

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempObjectArray.length){
                        museum_ListSelector.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameFullString);
                        loopCounter1Int ++;
                    }

                    museumTypePrev_String = museumType_String;

                }

            }

            if(type_ListSelector.text == "Floor"){ parentNameFull_ListSelector.disabled = true; }
            else if(
                type_ListSelector.text == "Exhibition" ||
                type_ListSelector.text == "Room"
            ){ parentNameFull_ListSelector.disabled = false; }

            /*Check which object museum is selected.*/
            if(museum_ListSelector.selectedIndex != -1){

                var typeEnum:EnumMuseumType = null;
                if(museumType_String == "Exhibition"){ typeEnum = EXH; }
                else if(museumType_String == "Floor"){ typeEnum = FLR; }
                else if(museumType_String == "Room"){ typeEnum = ROM; }

                selected_Museum_Object = CollectionFunction.FindMuseumObject(_Global_Object, typeEnum, museum_ListSelector.text);

                if(selected_Museum_Object != selectedPrev_Museum_Object){

                    var loopCounter1Int:Int = 1;
                    while(loopCounter1Int <= listSelectorTagStructArray.length){

                        var textObject:Text = _Popup.content.findChild("UIPopupEditMuseum_Object_SelectTagText_" + loopCounter1Int, Text, true);
                        var listSelectorObject:ListSelector = _Popup.content.findChild("UIPopupEditMuseum_Object_SelectTag_" + loopCounter1Int, ListSelector, true);
                        _Grid.removeChild(textObject);
                        _Grid.removeChild(listSelectorObject);
                        loopCounter1Int ++;

                    }
                    CollectionFunction.ClearArray(listSelectorTagStructArray);

                    loopCounter1Int = 1;
                    while(loopCounter1Int <= explanation_TextInput_Struct_Array.length){

                        var textObject:Text = _Popup.content.findChild("UIPopupEditMuseum_Object_InputExplanationText_" + loopCounter1Int, Text, true);
                        var textInputObject:TextInput = _Popup.content.findChild("UIPopupEditMuseum_Object_InputExplanation_" + loopCounter1Int, TextInput, true);
                        _Grid.removeChild(textObject);
                        _Grid.removeChild(textInputObject);
                        loopCounter1Int ++;

                    }
                    CollectionFunction.ClearArray(explanation_TextInput_Struct_Array);

                    var fullString:String = "";
                    if(selected_Museum_Object.GetFullBool() == true){ fullString = "True"; }
                    else if(selected_Museum_Object.GetFullBool() == false){ fullString = "False"; }
                    full_Text.text = fullString;
                    visitorCurrent_Text.text = "" + selected_Museum_Object.GetVisitorCurrentInt();
                    visitorTotal_Text.text = "" + selected_Museum_Object.GetVisitorTotalInt();
                    nameAlt_TextInput.disabled = false;
                    nameAlt_TextInput.text = "";
                    nameFull_TextInput.disabled = false;
                    nameFull_TextInput.text = "";
                    parentNameFull_ListSelector.disabled = false;
                    parentNameFull_ListSelector.selectedIndex = -1;

                    var explanationAmountInt:Int = 0;
                    explanationAmountInt = selected_Museum_Object.GetExplanationStringArray().length;
                    explanationLastIndex_Int = _Grid.indexOfChild(visitorTotal_Text) + 1;
                    loopCounter1Int = 0;
                    while(loopCounter1Int < explanationAmountInt){

                        var textObject:Text = new Text();
                        var textInputObject:TextInput = new TextInput();
                        var textInputExplanationStruct:TextInput_Struct = {

                            textInputObject     :textInputObject,
                            textObject          :textObject

                        };
                        explanation_TextInput_Struct_Array.push(textInputExplanationStruct);
                        textObject.id = "UIPopupEditMuseum_Object_InputExplanationText_" + explanation_TextInput_Struct_Array.length;
                        textObject.text = "Explanation";
                        _Grid.addChildAt(textObject, explanationLastIndex_Int);
                        explanationLastIndex_Int = _Grid.indexOfChild(explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textObject) + 1;

                        textInputObject.disabled = false;
                        textInputObject.id = "UIPopupEditMuseum_Object_InputExplanation_" + explanation_TextInput_Struct_Array.length;
                        textInputObject.percentWidth = 100;
                        textInputObject.text = selected_Museum_Object.GetExplanationStringArray()[loopCounter1Int];
                        _Grid.addChildAt(textInputObject, explanationLastIndex_Int);
                        explanationLastIndex_Int = _Grid.indexOfChild(explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject) + 1;

                        loopCounter1Int ++;

                    }
                    /*Set the GUI here.
                    So everytime the selected object change we reset the GUI so that it matched with information
                        received from the museum_ListSelector.*/
                    var tagAmountInt:Int = 0;
                    tagAmountInt = selected_Museum_Object.GetTagObjectArray().length;
                    loopCounter1Int = 0;
                    while(loopCounter1Int < tagAmountInt){

                        var textObject:Text = new Text();
                        var listSelectorObject:ListSelector = new ListSelector();
                        var listSelectorTagStruct = {

                            listSelectorObject  :listSelectorObject,
                            textObject          :textObject

                        }
                        listSelectorTagStructArray.push(listSelectorTagStruct);
                        textObject.id = "UIPopupEditMuseum_Object_SelectTagText_" + listSelectorTagStructArray.length;
                        textObject.text = "Tags";
                        _Grid.addChild(textObject);
                        listSelectorObject.disabled = false;
                        listSelectorObject.id = "UIPopupEditMuseum_Object_SelectTag_" + listSelectorTagStructArray.length;
                        listSelectorObject.percentWidth = 100;
                        /*CAUTION: I mask the index so the text is actually what it is from the selected_Museum_Object but the selected index
                            is the index after Remove entry.*/
                        listSelectorObject.selectedIndex = 1;
                        listSelectorObject.text =  selected_Museum_Object.GetTagObjectArray()[loopCounter1Int].GetNameString();
                        listSelectorObject.dataSource.createFromString("Remove");
                        /*Adding multiple data sources.*/
                        var loopCounter2Int:Int = 0;
                        while(loopCounter2Int < _Global_Object.GetTagObjectArray().length){

                            var matchBool:Bool = false;
                            var loopCounter3Int:Int = 0;
                            while(loopCounter3Int < listSelectorTagStructArray.length){

                                if(_Global_Object.GetTagObjectArray()[loopCounter2Int].GetNameString() == listSelectorTagStructArray[loopCounter3Int].listSelectorObject.text){ matchBool = true; }
                                loopCounter3Int ++;

                            }

                            if(matchBool == false){
                                listSelectorObject.dataSource.createFromString(_Global_Object.GetTagObjectArray()[loopCounter2Int].GetNameString());
                            }

                            loopCounter2Int ++;

                        }
                        _Grid.addChild(listSelectorObject);
                        listSelectorObject.method = "default";

                        loopCounter1Int ++;

                    }
                    nameAlt_TextInput.text = selected_Museum_Object.GetNameStruct().nameAltString;
                    nameFull_TextInput.text = selected_Museum_Object.GetNameStruct().nameFullString;
                    if(museumType_String != "Floor"){
                        parentNameFull_ListSelector.text = selected_Museum_Object.GetParentObject().GetNameStruct().nameFullString;

                        var tempObjectArray:Array<Museum_Object> = null;
                        if(museumType_String == "Exhibition"){ tempObjectArray = _Global_Object.GetRoomObjectArray(); }
                        else if(museumType_String == "Room"){ tempObjectArray = _Global_Object.GetFloorObjectArray(); }

                        loopCounter1Int = 0;
                        while(loopCounter1Int < tempObjectArray.length){

                            parentNameFull_ListSelector.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameFullString);
                            loopCounter1Int ++;

                        }

                    }
                    else if(museumType_String == "Floor"){ parentNameFull_ListSelector.disabled = true; }

                    selectedPrev_Museum_Object = selected_Museum_Object;

                }

            }

        }

        if(_Popup != null && listSelectorTagStructArray.length > 0){

            /*For when the ListSelector struct array is having lenght equal to 1 and loopCounter1Int is not having index equal to the ListSelector array length minus 1,
                reset the value of the of the following ListSelector.
            If the condition other than those, remove the ListSelector from the ListSelector struct array and from the grid layout.
            This codes below affects when user deleting tags.*/
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < listSelectorTagStructArray.length){

                if(
                    listSelectorTagStructArray.length                                               >  1 &&
                    listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex    == 0
                ){
                    if(loopCounter1Int == listSelectorTagStructArray.length - 1){
                        listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex = -1;
                    }
                    else{
                        _Grid.removeChild(listSelectorTagStructArray[loopCounter1Int].listSelectorObject);
                        _Grid.removeChild(listSelectorTagStructArray[loopCounter1Int].textObject);
                        listSelectorTagStructArray.remove(listSelectorTagStructArray[loopCounter1Int]);

                        /*Re - adjust the list selector id.*/
                        var loopCounter2Int:Int = 1;
                        while(loopCounter2Int <= listSelectorTagStructArray.length){

                            listSelectorTagStructArray[loopCounter2Int - 1].listSelectorObject.id = "UIPopupEditMuseum_Object_SelectTag_" + loopCounter2Int;
                            listSelectorTagStructArray[loopCounter2Int - 1].textObject.id = "UIPopupEditMuseum_Object_SelectTagText_" + loopCounter2Int;
                            loopCounter2Int ++;

                        }
                    }
                }
                else if(listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex == 0 && listSelectorTagStructArray.length == 1){
                    listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex = -1;
                }
                loopCounter1Int ++;

            }

            if(listSelectorTagStructArray[listSelectorTagStructArray.length - 1].listSelectorObject.selectedIndex != -1 && listSelectorTagStructArray[listSelectorTagStructArray.length - 1].listSelectorObject.selectedIndex != 0){

                var listSelectorTagTextObject:Text = new Text();
                var listSelectorTagObject:ListSelector = new ListSelector();
                var listSelectorTagStruct = {
                    listSelectorObject  :listSelectorTagObject,
                    textObject          :listSelectorTagTextObject
                };
                listSelectorTagStructArray.push(listSelectorTagStruct);


                listSelectorTagTextObject = new Text();
                listSelectorTagTextObject.text = "Tags";
                listSelectorTagTextObject.id = "UIPopupEditMuseum_Object_SelectTagText_" + listSelectorTagStructArray.length;
                _Grid.addChild(listSelectorTagTextObject);

                listSelectorTagObject.dataSource.createFromString("Remove");

                listSelectorTagObject.id = "UIPopupEditMuseum_Object_SelectTag_" + listSelectorTagStructArray.length;
                listSelectorTagObject.percentWidth = 100;
                listSelectorTagObject.text = " ";
                _Grid.addChild(listSelectorTagObject);

                var tempUsedTagStringArray:Array<String> = new Array<String>();
                /*This loop is for adding every possible tags into the list selector.*/
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < _Global_Object.GetTagObjectArray().length){
                    tempUsedTagStringArray.push(_Global_Object.GetTagObjectArray()[loopCounter1Int].GetNameString());
                    loopCounter1Int ++;
                }
                /*This loop is for removing tag that is inputted in previous list selector.*/
                loopCounter1Int = 1;
                while(loopCounter1Int <= listSelectorTagStructArray.length){

                    var tempListSelectorTagObject:ListSelector = _Popup.content.findChild("UIPopupEditMuseum_Object_SelectTag_" + loopCounter1Int, ListSelector, true);
                    tempUsedTagStringArray.remove(tempListSelectorTagObject.text);
                    loopCounter1Int ++;

                }
                /*Add every tag that is not yet added within the museum object into the list selector.*/
                loopCounter1Int = 0;
                while(loopCounter1Int < tempUsedTagStringArray.length){

                    listSelectorTagObject.dataSource.createFromString(tempUsedTagStringArray[loopCounter1Int]);
                    loopCounter1Int ++;

                }

                listSelectorTagObject.method = "default"; /*For some reason you need this to be configured after the object is initialized in the screen.*/

            }

        }

        if(_Popup != null && explanation_TextInput_Struct_Array.length > 0){

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < explanation_TextInput_Struct_Array.length){

                if(
                    (
                        explanation_TextInput_Struct_Array[loopCounter1Int].textInputObject.text == "" ||
                        explanation_TextInput_Struct_Array[loopCounter1Int].textInputObject.text == " "
                    ) &&
                    explanation_TextInput_Struct_Array.length > 1
                ){

                    /*PENDING: Might need some checking here due to it it quite different than the original
                        codes.*/
                    if(loopCounter1Int != explanation_TextInput_Struct_Array.length - 1){

                        _Grid.removeChild(explanation_TextInput_Struct_Array[loopCounter1Int].textInputObject);
                        _Grid.removeChild(explanation_TextInput_Struct_Array[loopCounter1Int].textObject);
                        explanation_TextInput_Struct_Array.remove(explanation_TextInput_Struct_Array[loopCounter1Int]);

                        var loopCounter2Int:Int = 1;
                        while(loopCounter2Int <= explanation_TextInput_Struct_Array.length){

                            explanation_TextInput_Struct_Array[loopCounter2Int - 1].textInputObject.id = "UIPopupEditMuseum_Object_InputExplanation_" + loopCounter2Int;
                            explanation_TextInput_Struct_Array[loopCounter2Int - 1].textObject.id = "UIPopupEditMuseum_Object_InputExplanationText_" + loopCounter2Int;
                            loopCounter2Int ++;

                        }
                        explanationLastIndex_Int = _Grid.indexOfChild(explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject) + 1;

                    }

                }
                loopCounter1Int ++;

            }

            if(
                explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject.text != "" &&
                explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject.text != " "
            ){

                var textInputExplanationTextObject:Text = new Text();
                var textInputExplanationObject:TextInput = new TextInput();
                var textInputExplanationStruct = {
                    textInputObject     : textInputExplanationObject,
                    textObject          : textInputExplanationTextObject
                };
                explanation_TextInput_Struct_Array.push(textInputExplanationStruct);

                textInputExplanationTextObject.text = "Explanation";
                textInputExplanationTextObject.id = "UIPopupEditMuseum_Object_InputExplanationText_" + explanation_TextInput_Struct_Array.length;
                _Grid.addChildAt(textInputExplanationTextObject, explanationLastIndex_Int);
                explanationLastIndex_Int = _Grid.indexOfChild(textInputExplanationTextObject) + 1;

                textInputExplanationObject.id = "UIPopupEditMuseum_Object_InputExplanation_" + explanation_TextInput_Struct_Array.length;
                textInputExplanationObject.percentWidth = 100;
                _Grid.addChildAt(textInputExplanationObject, explanationLastIndex_Int);
                explanationLastIndex_Int = _Grid.indexOfChild(textInputExplanationObject) + 1;

            }

        }

    }

}
