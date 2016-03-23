class MuseumAddUIPopup_Object extends UIPopup_Object{





    /*==================================================*/
    private var explanation_TextInput                   (null, null)        :TextInput                      = null;
    private var explanation_TextInput_Struct_Array      (null, null)        :Array<TextInput_Struct>        = new Array<TextInput_Struct>();
    private var explanationIndex_Int                    (null, null)        :Int                            = null;
    private var nameAlt_TextInput                       (null, null)        :TextInput                      = null;
    private var nameFull_TextInput                      (null, null)        :TextInput                      = null;
    private var parent_ListSelector                     (null, null)        :ListSelector                   = null;
    private var tag_ListSelector                        (null, null)        :ListSelector                   = null;
    private var tag_ListSelector_Struct_Array           (null, null)        :Array<ListSelector_Struct>     = new Array<ListSelector_Struct>();
    private var type_Int                                (null, null)        :Int                            = null;
    private var type_ListSelector                       (null, null)        :ListSelector                   = null;
    private var typePrev_Int                            (null, null)        :Int                            = null;
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
            "MuseumAddUIPopup_Button",
            Init_Void,
            "layout/MuseumAddUIPopup_Object.xml",
            "Add Museum Object"
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





        var _MuseumType_Enum            :MuseumType_Enum    = null;
        var _Tag_Object_Array           :Array<Tag_Object>  = new Array<Tag_Object>();
        var explanation_String_Array    :Array<String>      = new Array<String>();
        var nameAlt_String              :String             = nameAlt_TextInput.text;
        var nameFull_String             :String             = nameFull_TextInput.text;
        var parent_Museum_Object        :Museum_Object      = null;
        var parentNameAlt_String        :String             = parent_ListSelector.text;





        /*Assign museum type enum.*/
        if(type_ListSelector.text == "Exhibition"   && type_ListSelector.text != null)
            { _MuseumType_Enum = EXH; }
        else if(type_ListSelector.text == "Floor"   && type_ListSelector.text != null)
            { _MuseumType_Enum = FLR; }
        else if(type_ListSelector.text == "Room"    && type_ListSelector.text != null)
            { _MuseumType_Enum = ROM; }





        /*Assign tag object array.*/
        loopCounter1_Int = 0;
        while(loopCounter1_Int < tag_ListSelector_Struct_Array.length){

            var tagName_String:String =
                tag_ListSelector_Struct_Array[loopCounter1_Int]._ListSelector.text;
            var _Tag_Object:Tag_Object =
                StaticFunction_Collection.Find_Tag_Object(
                    _Global_Object,
                    false,
                    tagName_String
                );
            




            /*If the previously searched tag is returned false, then search from the general tag object.*/
            if(_Tag_Object == null){

                _Tag_Object = StaticFunction_Collection.Find_Tag_Object(
                    _Global_Object,
                    true,
                    tagName_String
                );

            }





            /*If the tag object is not null then I can enter it into the temporary tag array.*/
            if(_Tag_Object != null){ _Tag_Object_Array.push(_Tag_Object); }





            loopCounter1_Int ++;

        }





        /*Assign explanation String array.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < explanation_TextInput_Struct_Array.length){

            if(
                explanation_TextInput_Struct_Array[loopCounter1_Int]._Text_Input.text   != ""       &&
                explanation_TextInput_Struct_Array[loopCounter1_Int]._Text_Input.text   != " "      &&
                explanation_TextInput_Struct_Array[loopCounter1_Int]._Text_Input        != null
            ){
                explanation_String_Array.push
                    (explanation_TextInput_Struct_Array[loopCounter1_Int]._Text_Input.text);
            }
            




            loopCounter1_Int ++;

        }





        /*Assign parent museum object.*/
        if(_MuseumType_Enum == FLR && type_ListSelector.text != null){

            parent_Museum_Object = null;
            parentNameAlt_String = "XXX_XXX";

        }
        else if(type_ListSelector.text != null){

            parent_Museum_Object = StaticFunction_Collection.Find_Museum_Object(
                _Global_Object,
                _MuseumType_Enum,
                parentNameAlt_String
            );

        }





        /*Do some validations here.*/
        if(
            (_MuseumType_Enum != null)                                                                      &&
            (_Tag_Object_Array.length > 0)                                                                  &&
            (explanation_String_Array.length > 0)                                                           &&
            (nameAlt_String != "" && nameAlt_String != " " && nameAlt_String != null)                       &&
            (nameFull_String != "" && nameFull_String != " " && nameFull_String != null )                   &&
            (parent_Museum_Object != null)                                                                  &&
            (parentNameAlt_String != "" && parentNameAlt_String != " " && parentNameAlt_String != null)
        ){

            /*Finally add the museum object.*/
            var _Museum_Object:Museum_Object = new Museum_Object(
                _Global_Object,
                _MuseumType_Enum,
                _Tag_Object_Array,
                explanation_String_Array,
                nameAlt_String,
                nameFull_String,
                parent_Museum_Object

            );

        }

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
        _Button = _root.findChild("UIPopupAddMuseumObjectButton", Button, true);
        /*Adding a callback function of when the button is pressed.*/
        _Button.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupAddObjectMuseum.xml");
            _Popup = PopupManager.instance.showCustom(iDisplayObject, "Add Museum Object", buttonControlInt, function(_button){

                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK){

                    /*If button OK is pressed then add a museum object according to the inputted value.
                    PENDING: Check whethe the data inputted valid.
                    PENDING: Check how to make disable OK button of this popup.*/
                    var nameAltString:String = nameAlt_TextInput.text;
                    var nameFullString:String = nameFull_TextInput.text;
                    var parentNameAltString:String = parent_ListSelector.text;
                    var explanationStringArray:Array<String> = new Array<String>();
                    var tagObjectArray:Array<ObjectTag> = new Array<ObjectTag>();
                    var typeEnum:EnumMuseumType = null;
                    if(type_ListSelector.text == "Exhibition"){ typeEnum = EXH; }
                    else if(type_ListSelector.text == "Floor"){ typeEnum = FLR; }
                    else if(type_ListSelector.text == "Room"){ typeEnum = ROM; }

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
                    while(loopCounter1Int < tag_ListSelector_Struct_Array.length){
                        var tagNameString:String = tag_ListSelector_Struct_Array[loopCounter1Int].listSelectorObject.text;
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

                        /*Adding the museum object here.*/
                        var museumObject:ObjectMuseum = new ObjectMuseum(_Global_Object, explanationStringArray, nameAltString, nameFullString, parentNameAltString, tagObjectArray, typeEnum);

                    }

                }

            });

            nameFull_TextInput = _Popup.content.findChild("UIPopupAddObjectMuseum_InputFullName", TextInput, true);
            nameAlt_TextInput = _Popup.content.findChild("UIPopupAddObjectMuseum_InputAltName", TextInput, true);
            _Grid = _Popup.content.findChild("UIPopupAddObjectMuseum_Grid", Grid, true);
            parent_ListSelector = _Popup.content.findChild("UIPopupAddObjectMuseum_SelectObjectParent", ListSelector, true);
            parent_ListSelector.method = "default";
            parent_ListSelector.selectedIndex = -1;
            type_ListSelector = _Popup.content.findChild("UIPopupAddObjectMuseum_SelectType", ListSelector, true);
            type_ListSelector.method = "default";

            /*Adding dynamic tag list selector.*/
            CollectionFunction.ClearArray(tag_ListSelector_Struct_Array);
            tag_ListSelector = _Popup.content.findChild("UIPopupAddObjectMuseum_SelectTag_1", ListSelector, true);
            tag_ListSelector.method = "default";
            var listSelectorTagTextObject:Text = _Popup.content.findChild("UIPopupAddObjectMuseum_SelectTagText_1", Text, true);
            var listSelectorTagStruct   :ListSelector_Struct = {
                listSelectorObject      :tag_ListSelector,
                textObject              :listSelectorTagTextObject
            };
            tag_ListSelector_Struct_Array.push(listSelectorTagStruct);

            tag_ListSelector.dataSource.createFromString("Remove");

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < _Global_Object.GetTagObjectArray().length){
                tag_ListSelector.dataSource.createFromString(_Global_Object.GetTagObjectArray()[loopCounter1Int].GetNameString());
                loopCounter1Int ++;
            }

            /*Adding dynamic explanation text input.*/
            CollectionFunction.ClearArray(explanation_TextInput_Struct_Array);
            explanation_TextInput = _Popup.content.findChild("UIPopupAddObjectMuseum_InputExplanation_1", TextInput, true);
            var textInputExplanationTextObject:Text = _Popup.content.findChild("UIPopupAddObjectMuseum_InputExplanationText_1", Text, true);
            var textInputExplanationStruct  :TextInput_Struct = {
                textInputObject             :explanation_TextInput,
                textObject                  :textInputExplanationTextObject
            }
            explanation_TextInput_Struct_Array.push(textInputExplanationStruct);
            explanationIndex_Int = _Grid.indexOfChild(explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject) + 1;

        }

    }



    public function UpdateVoid(){

        if(_Popup != null && parent_ListSelector != null && type_ListSelector != null){

            if(type_ListSelector.selectedIndex == -1 || type_ListSelector.text == "" || type_ListSelector.text == " "){
                parent_ListSelector.disabled = true;
                tag_ListSelector.disabled = true;
                nameAlt_TextInput.disabled = true;
                nameFull_TextInput.disabled = true;
                explanation_TextInput.disabled = true;
            }
            else{
                tag_ListSelector.disabled = false;
                nameAlt_TextInput.disabled = false;
                nameFull_TextInput.disabled = false;
                explanation_TextInput.disabled = false;
            }
            if(type_ListSelector.text != "Floor"){
                parent_ListSelector.disabled = false;
            }

            listSelectorTypeInt = type_ListSelector.selectedIndex;
            if(listSelectorTypeInt == -1){ parent_ListSelector.disabled = true; }

            if(listSelectorTypeInt != typePrev_Int){
                parent_ListSelector.dataSource.removeAll();
                parent_ListSelector.selectedIndex = -1;

                var tempObjectArray:Array<ObjectMuseum> = null;
                if(listSelectorTypeInt == 0){ parent_ListSelector.disabled = false; tempObjectArray = _Global_Object.GetRoomObjectArray(); }
                else if(listSelectorTypeInt == 1){ parent_ListSelector.disabled = true; }
                else if(listSelectorTypeInt == 2){ parent_ListSelector.disabled = false; tempObjectArray = _Global_Object.GetFloorObjectArray(); }

                if(listSelectorTypeInt != -1 && listSelectorTypeInt != 1){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempObjectArray.length){
                        parent_ListSelector.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameAltString);
                        loopCounter1Int ++;
                    }
                }

                typePrev_Int = listSelectorTypeInt;
            }

        }

        if(_Popup != null && tag_ListSelector_Struct_Array.length > 0){

            /*For when the ListSelector struct array is having lenght equal to 1 and loopCounter1Int is not having index equal to the ListSelector array length minus 1,
                reset the value of the of the following ListSelector.
            If the condition other than those, remove the ListSelector from the ListSelector struct array and from the grid layout.*/
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < tag_ListSelector_Struct_Array.length){

                if(tag_ListSelector_Struct_Array[loopCounter1Int].listSelectorObject.selectedIndex == 0 && tag_ListSelector_Struct_Array.length > 1){
                    if(loopCounter1Int == tag_ListSelector_Struct_Array.length - 1){
                        tag_ListSelector_Struct_Array[loopCounter1Int].listSelectorObject.selectedIndex = -1;
                    }
                    else{
                        _Grid.removeChild(tag_ListSelector_Struct_Array[loopCounter1Int].listSelectorObject);
                        _Grid.removeChild(tag_ListSelector_Struct_Array[loopCounter1Int].textObject);
                        tag_ListSelector_Struct_Array.remove(tag_ListSelector_Struct_Array[loopCounter1Int]);

                        /*Re - adjust the list selector id.*/
                        var loopCounter2Int:Int = 1;
                        while(loopCounter2Int <= tag_ListSelector_Struct_Array.length){

                            tag_ListSelector_Struct_Array[loopCounter2Int - 1].listSelectorObject.id = "UIPopupEditObjectMuseum_SelectTag_" + loopCounter2Int;
                            tag_ListSelector_Struct_Array[loopCounter2Int - 1].textObject.id = "UIPopupEditObjectMuseum_SelectTagText_" + loopCounter2Int;
                            loopCounter2Int ++;

                        }
                    }
                }
                else if(tag_ListSelector_Struct_Array[loopCounter1Int].listSelectorObject.selectedIndex == 0 && tag_ListSelector_Struct_Array.length == 1){
                    tag_ListSelector_Struct_Array[loopCounter1Int].listSelectorObject.selectedIndex = -1;
                }
                loopCounter1Int ++;

            }

            if(tag_ListSelector_Struct_Array[tag_ListSelector_Struct_Array.length - 1].listSelectorObject.selectedIndex != -1 && tag_ListSelector_Struct_Array[tag_ListSelector_Struct_Array.length - 1].listSelectorObject.selectedIndex != 0){

                var listSelectorTagTextObject:Text = new Text();
                var tag_ListSelector:ListSelector = new ListSelector();
                var listSelectorTagStruct = {
                    listSelectorObject  :tag_ListSelector,
                    textObject          :listSelectorTagTextObject
                };
                tag_ListSelector_Struct_Array.push(listSelectorTagStruct);

                listSelectorTagTextObject.text = "Tags";
                listSelectorTagTextObject.id = "UIPopupAddObjectMuseum_SelectTagText_" + tag_ListSelector_Struct_Array.length;
                _Grid.addChild(listSelectorTagTextObject);

                tag_ListSelector.dataSource.createFromString("Remove");
                tag_ListSelector.id = "UIPopupAddObjectMuseum_SelectTag_" + tag_ListSelector_Struct_Array.length;
                tag_ListSelector.percentWidth = 100;
                tag_ListSelector.text = " ";
                _Grid.addChild(tag_ListSelector);

                var tempUsedTagStringArray:Array<String> = new Array<String>();
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < _Global_Object.GetTagObjectArray().length){
                    tempUsedTagStringArray.push(_Global_Object.GetTagObjectArray()[loopCounter1Int].GetNameString());
                    loopCounter1Int ++;
                }
                loopCounter1Int = 1;
                while(loopCounter1Int <= tag_ListSelector_Struct_Array.length){

                    var tempListSelectorTagObject:ListSelector = _Popup.content.findChild("UIPopupAddObjectMuseum_SelectTag_" + loopCounter1Int, ListSelector, true);
                    tempUsedTagStringArray.remove(tempListSelectorTagObject.text);
                    loopCounter1Int ++;

                }
                loopCounter1Int = 0;
                while(loopCounter1Int < tempUsedTagStringArray.length){

                    tag_ListSelector.dataSource.createFromString(tempUsedTagStringArray[loopCounter1Int]);
                    loopCounter1Int ++;

                }

                /*For some reason you need this to be configured after the object is initialized in
                    the screen.*/
                tag_ListSelector.method = "default";

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

                            explanation_TextInput_Struct_Array[loopCounter2Int - 1].textInputObject.id = "UIPopupAddObjectMuseum_InputExplanation_" + loopCounter2Int;
                            explanation_TextInput_Struct_Array[loopCounter2Int - 1].textObject.id = "UIPopupAddObjectMuseum_InputExplanationText_" + loopCounter2Int;
                            loopCounter2Int ++;

                        }
                        explanationIndex_Int = _Grid.indexOfChild(explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject) + 1;

                    }

                }
                loopCounter1Int ++;

            }

            if(
                explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject.text != "" &&
                explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject.text != " "
            ){

                var textInputExplanationTextObject:Text = new Text();
                var explanation_TextInput:TextInput = new TextInput();
                var textInputExplanationStruct = {
                    textInputObject     : explanation_TextInput,
                    textObject          : textInputExplanationTextObject
                };
                explanation_TextInput_Struct_Array.push(textInputExplanationStruct);

                textInputExplanationTextObject.text = "Explanation";
                textInputExplanationTextObject.id = "UIPopupAddObjectMuseum_InputExplanationText_" + explanation_TextInput_Struct_Array.length;
                _Grid.addChildAt(textInputExplanationTextObject, explanationIndex_Int);
                explanationIndex_Int = _Grid.indexOfChild(textInputExplanationTextObject) + 1;

                explanation_TextInput.id = "UIPopupAddObjectMuseum_InputExplanation_" + explanation_TextInput_Struct_Array.length;
                explanation_TextInput.percentWidth = 100;
                _Grid.addChildAt(explanation_TextInput, explanationIndex_Int);
                explanationIndex_Int = _Grid.indexOfChild(explanation_TextInput) + 1;

            }

        }

    }

}
