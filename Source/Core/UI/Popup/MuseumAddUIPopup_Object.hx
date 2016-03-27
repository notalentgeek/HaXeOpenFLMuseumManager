class MuseumAddUIPopup_Object extends MuseumAddAndEditUIPopup_Object{





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
    private function Add_Void():Void{

        _Museum_Object:Museum_Object = new Museum_Object(
            _Global_Object,
            _MuseumType_Enum,
            _Tag_Object_Array,
            explanation_String_Array,
            nameAlt_String,
            nameFull_String,
            parent_Museum_Object
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();




        StaticFunction_Collection.Clear_T_Array(explanation_TextInput_Struct_Array);
        StaticFunction_Collection.Clear_T_Array(tag_ListSelector_Struct_Array);
        _Grid                                   = _Popup.content.findChild("MuseumAddUIPopup_Object__Grid"                          , Grid          , true);
        explanation_TextInput                   = _Popup.content.findChild("MuseumAddUIPopup_Object_explanation_TextInput_1"        , TextInput     , true);
        nameAlt_TextInput                       = _Popup.content.findChild("MuseumAddUIPopup_Object_nameAlt_TextInput"              , TextInput     , true);
        nameFull_TextInput                      = _Popup.content.findChild("MuseumAddUIPopup_Object_nameFull_TextInput"             , TextInput     , true);
        parent_ListSelector                     = _Popup.content.findChild("MuseumAddUIPopup_Object_parent_ListSelector"            , ListSelector  , true);
        tag_ListSelector                        = _Popup.content.findChild("MuseumAddUIPopup_Object_tag_ListSelector_1"             , ListSelector  , true);
        type_ListSelector                       = _Popup.content.findChild("MuseumAddUIPopup_Object_type_ListSelector"              , ListSelector  , true);
        var explanationTextInput_Text   :Text   = _Popup.content.findChild("MuseumAddUIPopup_Object_explanationTextInput_Text_1"    , Text          , true);
        var tagListSelector_Text        :Text   = _Popup.content.findChild("MuseumAddUIPopup_Object_tagListSelector_Text_1"         , Text          , true);





        var _ListSelector_Struct    :ListSelector_Struct = {
            _ListSelector           :tag_ListSelector,
            _Text                   :tagListSelector_Text
        };
        var _TextInput_Struct       :TextInput_Struct = {
            _TextInput              :explanation_TextInput,
            _Text                   :explanationTextInput_Text
        }

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){ super.Button_Void(Add_Void); }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){

        super.Init_Void();




        /*Push the first element of the explanation into explanation_TextInput_Struct_Array*/
        explanation_TextInput_Struct_Array.push(_TextInput_Struct);
        /*Set the next index an explanation would be added into the form.*/
        explanationIndex_Int =
            _Grid.indexOfChild(
                explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1]
                    ._TextInput
            ) + 1;





        /*Push the first element into the tag_ListSelector_Struct_Array.*/
        tag_ListSelector_Struct_Array.push(_ListSelector_Struct);
        /*Then create the first element of the list selector.*/
        tag_ListSelector.dataSource.createFromString("Remove");
        /*I have put the first element in the tag_ListSelector.
        Next thing to do is to put all possible array into the tag_ListSelector
            so that user can choose which tag they want for the newly created
            museum object.
        First I need to add the non general tag.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _Global_Object._Tag_Object_Array.length){

            tag_ListSelector.dataSource.createFromString(
                _Global_Object
                    ._Tag_Object_Array[loopCounter1_Int]
                    ._TagAgnostic_Object
                    .name_String
            );
            loopCounter1_Int ++;

        }
        /*Then I need to add the general tag array.*/
        loopCounter1_Int = 0;
        while(loopCounter1_Int < _Global_Object.general_Tag_Object_Array.length){

            tag_ListSelector.dataSource.createFromString(
                _Global_Object
                    .general_Tag_Object_Array[loopCounter1_Int]
                    ._TagAgnostic_Object
                    .name_String
            );
            loopCounter1_Int ++;

        }

    }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void():Void(){

        super.Update_Void();

    }
    /*==================================================*/




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
