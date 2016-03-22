class MuseumEditPopupUI_Object{





    /*==================================================*/
    private var _Button                                 (null, null)        :Button                         = null;
    private var _Global_Object                          (null, null)        :Global_Object                  = null;
    private var _Grid                                   (null, null)        :Grid                           = null;
    private var _Popup                                  (null, null)        :Popup                          = null;
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
    private var type_String                             (null, null)        :String                         = null;
    private var typePrev_String                         (null, null)        :String                         = null;
    private var visitorCurrent_Text                     (null, null)        :Text                           = null;
    private var visitorTotal_Text                       (null, null)        :Text                           = null;
    /*==================================================*/





    public function new(
        __Global_Object     :Global_Object,
        _root                       :Root
    ){

        _Global_Object = __Global_Object;

        _Button = _root.findChild("UIPopupEditMuseumObjectButton", Button, true);
        _Button.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupEditMuseum_Object.xml");
            _Popup = PopupManager.instance.showCustom(iDisplayObject, "Edit Museum Object", buttonControlInt, function(_button){

                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK){
                    /*If button OK is pressed then add a museum object according to the inputted value.
                    PENDING: Check whethe the data inputted valid.
                    PENDING: Check how to make disable OK button of this popup.*/
                    var nameAltString:String = nameAlt_TextInput.text;
                    var nameFullString:String = nameFull_TextInput.text;
                    var parentNameAltString:String = parentNameFull_ListSelector.text;
                    var explanationStringArray:Array<String> = new Array<String>();
                    var tagObjectArray:Array<ObjectTag> = new Array<ObjectTag>();
                    var typeEnum:EnumMuseumType = null;
                    if(parentNameFull_ListSelector.text == "Exhibition"){ typeEnum = EXH; }
                    else if(parentNameFull_ListSelector.text == "Floor"){ typeEnum = FLR; }
                    else if(parentNameFull_ListSelector.text == "Room"){ typeEnum = ROM; }

                    if(typeEnum == FLR){ parentNameAltString = "XXX_XXX"; }

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < explanation_TextInput_Struct_Array.length){
                        if(
                            explanation_TextInput_Struct_Array[loopCounter1Int].textInputObject.text != "" &&
                            explanation_TextInput_Struct_Array[loopCounter1Int].textInputObject.text != " "
                        ){
                            explanationStringArray.push(explanation_TextInput_Struct_Array[loopCounter1Int].textInputObject.text);
                        }
                        loopCounter1Int ++;
                    }
                    loopCounter1Int = 0;
                    while(loopCounter1Int < listSelectorTagStructArray.length){
                        var tagNameString:String = listSelectorTagStructArray[loopCounter1Int].listSelectorObject.text;
                        var tagObject:ObjectTag = CollectionFunction.FindTagObject(_Global_Object, false, tagNameString);
                        if(tagObject == null){ tagObject = CollectionFunction.FindTagObject(_Global_Object, true, tagNameString); }
                        if(tagObject != null){ tagObjectArray.push(tagObject); }
                        loopCounter1Int ++;
                    }

                    /*PENDING: Adding notification if user is not properly input new museum object information.*/
                    if(
                        nameAltString                   != "" || nameAltString          != " " || nameAltString         != null ||
                        nameFullString                  != "" || nameFullString         != " " || nameFullString        != null ||
                        parentNameAltString             != "" || parentNameAltString    != " " || parentNameAltString   != null ||
                        explanationStringArray.length   != 0  || tagObjectArray.length  != 0
                    ){

                        selected_Museum_Object.SetNameAltStringVoid(nameAltString);
                        selected_Museum_Object.SetNameFullStringVoid(nameFullString);
                        selected_Museum_Object.ChangeParentObject(parentNameAltString);
                        selected_Museum_Object.SetExplanationStringArrayVoid(explanationStringArray);
                        selected_Museum_Object.SetTagObjectArrayVoid(tagObjectArray);

                    }

                }

            });

            type_String = "";
            typePrev_String = "";

            full_Text = _Popup.content.findChild("UIPopupEditMuseum_Object_DisplayFull", Text, true);
            visitorCurrent_Text = _Popup.content.findChild("UIPopupEditMuseum_Object_DisplayVisitorCurrent", Text, true);
            visitorTotal_Text = _Popup.content.findChild("UIPopupEditMuseum_Object_DisplayVisitorTotal", Text, true);
            _Grid = _Popup.content.findChild("UIPopupEditMuseum_Object_Grid", Grid, true);
            nameAlt_TextInput = _Popup.content.findChild("UIPopupEditMuseum_Object_InputAltName", TextInput, true);
            nameAlt_TextInput.disabled = true;
            nameFull_TextInput = _Popup.content.findChild("UIPopupEditMuseum_Object_InputFullName", TextInput, true);
            nameFull_TextInput.disabled = true;
            museum_ListSelector = _Popup.content.findChild("UIPopupEditMuseum_Object_SelectMuseum_Object", ListSelector, true);
            museum_ListSelector.disabled = true;
            museum_ListSelector.method = "default";
            parentNameFull_ListSelector = _Popup.content.findChild("UIPopupEditMuseum_Object_SelectParentObject", ListSelector, true);
            parentNameFull_ListSelector.disabled = true;
            parentNameFull_ListSelector.method = "default";
            type_ListSelector = _Popup.content.findChild("UIPopupEditMuseum_Object_SelectType", ListSelector, true);
            type_ListSelector.method = "default";

            /*Adding callback for the museum specific button.*/
            if(_e.component.userData != null){
                var string:String = "" + _e.component.userData;
                var stringArray:Array<String> = string.split("*");
                var nameAltString:String = stringArray[1];
                stringArray = nameAltString.split("_");
                var enumString:String = stringArray[0];
                var typeEnum:EnumMuseumType = Type.createEnum(EnumMuseumType, enumString);
                var museumObject:Museum_Object = CollectionFunction.FindMuseumObject(_Global_Object, typeEnum, nameAltString);

                if(museumObject != null){

                    selected_Museum_Object = museumObject;

                    var fullString:String = "";
                    if(selected_Museum_Object.GetFullBool() == true){ fullString = "True"; }
                    else if(selected_Museum_Object.GetFullBool() == false){ fullString = "False"; }
                    full_Text.text = fullString;
                    visitorCurrent_Text.text = "" + selected_Museum_Object.GetVisitorCurrentInt();
                    visitorTotal_Text.text = "" + selected_Museum_Object.GetVisitorTotalInt();
                    nameAlt_TextInput.disabled = false;
                    nameAlt_TextInput.text = selected_Museum_Object.GetNameStruct().nameAltString;
                    nameFull_TextInput.disabled = false;
                    nameFull_TextInput.text = selected_Museum_Object.GetNameStruct().nameFullString;
                    type_ListSelector.disabled = false;
                    var nameFullEnumString:String = "";
                    if(enumString == "EXH"){ nameFullEnumString = "Exhibition" ;}
                    else if(enumString == "FLR"){ nameFullEnumString = "Floor" ;}
                    else if(enumString == "ROM"){ nameFullEnumString = "Room" ;}
                    type_ListSelector.text = nameFullEnumString;
                    type_String = type_ListSelector.text;
                    typePrev_String = type_ListSelector.text;

                    var tempObjectArray:Array<Museum_Object> = new Array<Museum_Object>();
                    if(type_String == "Exhibition"){ tempObjectArray = _Global_Object.GetExhibitionObjectArray(); }
                    else if(type_String == "Floor"){ tempObjectArray = _Global_Object.GetFloorObjectArray(); }
                    else if(type_String == "Room"){ tempObjectArray = _Global_Object.GetRoomObjectArray(); }

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempObjectArray.length){
                        museum_ListSelector.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameFullString);
                        loopCounter1Int ++;
                    }
                    museum_ListSelector.disabled = false;
                    museum_ListSelector.selectedIndex = 0;
                    museum_ListSelector.text = nameFull_TextInput.text;
                    if(museumObject.GetParentObject() != null){
                        parentNameFull_ListSelector.disabled = false;
                        parentNameFull_ListSelector.text = museumObject.GetParentObject().GetNameStruct().nameFullString;
                    }
                }
            }

            /*Adding the first explanation box.*/
            CollectionFunction.ClearArray(explanation_TextInput_Struct_Array);
            var textObject:Text = new Text();
            var textInputObject:TextInput = new TextInput();
            var textInputExplanationStruct  :TextInput_Struct = {
                textInputObject             :textInputObject,
                textObject                  :textObject
            };
            explanation_TextInput_Struct_Array.push(textInputExplanationStruct);
            textObject.id = "UIPopupEditMuseum_Object_InputExplanationText_" + explanation_TextInput_Struct_Array.length;
            textObject.text = "Explanation";
            textInputObject.disabled = true;
            textInputObject.id = "UIPopupEditMuseum_Object_InputExplanation_" + explanation_TextInput_Struct_Array.length;
            textInputObject.percentWidth = 100;
            _Grid.addChild(textInputObject);
            explanationLastIndex_Int = _Grid.indexOfChild(explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject) + 1;

            /*Adding the first tag selection box.*/
            CollectionFunction.ClearArray(listSelectorTagStructArray);
            var textObject:Text = new Text();
            var listSelectorObject:ListSelector = new ListSelector();
            var listSelectorTagStruct   :ListSelector_Struct = {
                listSelectorObject      :listSelectorObject,
                textObject              :textObject
            };
            listSelectorTagStructArray.push(listSelectorTagStruct);
            textObject.id = "UIPopupEditMuseum_Object_SelectTagText_" + listSelectorTagStructArray.length;
            textObject.text = "Tags";
            _Grid.addChild(textObject);
            listSelectorObject.disabled = true;
            listSelectorObject.id = "UIPopupEditMuseum_Object_SelectTag_" + listSelectorTagStructArray.length;
            listSelectorObject.percentWidth = 100;
            listSelectorObject.selectedIndex = -1;
            listSelectorObject.text = " ";
            _Grid.addChild(listSelectorObject);
            listSelectorObject.method = "default";

        }

    }
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

                type_String = type_ListSelector.text;
                if(type_String != typePrev_String){

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
                    if(type_String == "Exhibition"){ tempObjectArray = _Global_Object.GetExhibitionObjectArray(); }
                    else if(type_String == "Floor"){ tempObjectArray = _Global_Object.GetFloorObjectArray(); }
                    else if(type_String == "Room"){ tempObjectArray = _Global_Object.GetRoomObjectArray(); }

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempObjectArray.length){
                        museum_ListSelector.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameFullString);
                        loopCounter1Int ++;
                    }

                    typePrev_String = type_String;

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
                if(type_String == "Exhibition"){ typeEnum = EXH; }
                else if(type_String == "Floor"){ typeEnum = FLR; }
                else if(type_String == "Room"){ typeEnum = ROM; }

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
                    if(type_String != "Floor"){
                        parentNameFull_ListSelector.text = selected_Museum_Object.GetParentObject().GetNameStruct().nameFullString;

                        var tempObjectArray:Array<Museum_Object> = null;
                        if(type_String == "Exhibition"){ tempObjectArray = _Global_Object.GetRoomObjectArray(); }
                        else if(type_String == "Room"){ tempObjectArray = _Global_Object.GetFloorObjectArray(); }

                        loopCounter1Int = 0;
                        while(loopCounter1Int < tempObjectArray.length){

                            parentNameFull_ListSelector.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameFullString);
                            loopCounter1Int ++;

                        }

                    }
                    else if(type_String == "Floor"){ parentNameFull_ListSelector.disabled = true; }

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
